ldapsearch -Q "sn=*bon*" sn | grep ^sn | wc -l | tr -d ' '
