ifconfig | grep ether | cut -f2 | sed 's/ether //' | sed 's/ //'
