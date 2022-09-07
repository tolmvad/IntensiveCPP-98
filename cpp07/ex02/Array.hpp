#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <random>

template <typename T>
class Array {
	private:
		int len;
		T *data;

	public:
		Array() {
			len = 0;
			data = NULL;
		}

		Array(unsigned int value) {
			if (value < 0)
				std::cerr << "Error: length of array negative\n";
			this->len = value;
			this->data = new T[value];
		}

		~Array() {
			if (this->len > 0)
				delete [] this->data;
		}

		Array(const Array& copy) {
			if (copy.data) {
				this->len = copy.len;
				this->data = new T[copy.size()];
				for (int i = 0; i < this->size(); i++)
					this->data[i] = copy.data[i];
			} else {
				this->len = copy.len;
				this->data = NULL;
			}
		}

		Array& operator=(const Array& copy) {
			if (this == &copy)
				return *this;
			if (this->len > 0)
				delete [] this->data;
			if (copy.data) {
				this->len = copy.len;
				this->data = new T[copy.size()];
				for (int i = 0; i < this->size(); i++)
					this->data[i] = copy.data[i];
			} else {
				this->len = copy.len;
				this->data = NULL;
			}
			return *this;
		}

		int size() const{
			return this->len;
		}

		T& operator[] (int idx) {
			if (idx < 0 || idx >= this->len)
				throw IdxException();
			return this->data[idx];
		}

		class IdxException: public std::exception {
			virtual const char* what() const throw () {
				return "Error: Index out of array length";
			}
		};
};

#endif
