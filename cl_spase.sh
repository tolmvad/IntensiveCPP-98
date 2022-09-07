#!/bin/zsh

#COLOR
GREEN="\e[32m"
RED="\e[31m"
ENDCOLOR="\e[0m"

USER=$(whoami)

#Script
BEFORE=$(df -h | grep $USER | awk '{printf("%d%%\n", $5)}')
rm -rf ~/Library/Caches/*
rm -rf ~/Library/42_cache
rm -rf ~/Library/Application\ Support/Slack/Service\ Worker/CacheStorage/
rm -rf ~/Library/Application\ Support/Slack/Cache/
rm -rf ~/Library/Application\ Support/Slack/Code\ Cache/
rm -rf ~/Library/Application\ Support/Code/Cache
rm -rf ~/Library/Application\ Support/Code/CachedData
rm -rf ~/Library/Application\ Support/Code/CachedExtension
rm -rf ~/Library/Application\ Support/Code/CachedExtensions
rm -rf ~/Library/Application\ Support/Code/CachedExtensionVSIXs
rm -rf ~/Library/Application\ Support/Code/Code\ Cache
rm -rf ~/Library/Application\ Support/Code/User/workspaceStorage
AFTER=$(df -h | grep $USER |  awk '{printf("%d%%\n", $5)}')

#info
echo "${GREEN}space free${ENDCOLOR}"
echo "${RED}${BEFORE}${ENDCOLOR} -> ${GREEN}${AFTER}${ENDCOLOR}"
