#!/bin/sh

# Write a command line that will display the list of groups for which the login, 
# contained in the environment variable FT_USER , is a member. 
# Separated by commas without spaces.

id -G -n $FT_USER | tr ' ' ',' | tr -d '\n'