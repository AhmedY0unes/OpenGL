#!/bin/bash

display_usage() {  
	echo -e "Usage: ./opengl.sh <File.cpp>"
	} 

	if [  $# -ne 1 ] 
	then 
		display_usage
		exit 1
	else
        file_name=$1
        exe_file=${file_name%.cpp}
        g++ $file_name -o $exe_file -lglut -lGLU -lGL
		./$exe_file

	fi
