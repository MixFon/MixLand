cat $1 | grep -i “bomber“ | grep -i “nicolas” | grep -v “Sally” | awk ‘{print $(NF - 1) “ “ $(NF - 2)}’ | tr -d ‘BomberNicolas’

