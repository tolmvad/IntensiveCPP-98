#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact Contacts[8];

	public:
		PhoneBook();
		~PhoneBook();

		void Add();
		void Search();
		int Empty(Contact cont);
};

#endif
