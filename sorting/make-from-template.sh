#!/bin/bash

if [ $# != 1 ]
then
	echo "command: ./make-from-template.sh <FOLDER>"
else
	FOLDER=$1
	cp -R template $FOLDER
	mv $FOLDER/algorithm.c $FOLDER/$FOLDER.c
fi