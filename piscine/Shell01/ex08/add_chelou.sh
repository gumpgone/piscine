echo "$FT_NBR1 + $FT_NBR2" | tr "\'\\" "01" | tr "\"?\!" "234" | tr "mrdoc" "01234" | xargs -I {} echo "ibase=5; {}" | bc | xargs -I {} echo "obase=13; {}" | bc | tr "0123456789ABC" "gtaio luSnemf"
