#!/bin/bash

if [ -z "${1}" ]; then

    printf "Please give a file exe for example cpp\n"
  
exit 1

else

    var=$(echo "${1}")
    
fi

    numF=$(ls *."${1}" | wc -l) 
    sudo mv *."${1}" ~/Josiahs-repo/Source_Code
    printf "Number of files moved: %d\n" "${numF}"


exit 0

