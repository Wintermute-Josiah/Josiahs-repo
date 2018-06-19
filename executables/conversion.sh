#!/bin/bash 


function Print_Base() {

base2=$(echo "ibase=10;obase=2;${*}" | bc)
base=$(echo "ibase=10;obase=10;${*}" | bc)

printf "%9d |%9o |%9d |%9X |\n" "${base2}" "${base}" "${base}" "${base}" 




}




for i in ${*}; do
    Print_Base "${i}" 
done 


exit 0
