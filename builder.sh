rm outfile 2>/dev/null
filename=`ls | tail -5 | head -1`
echo "[+] Compiling the file $filename"
while true;do
	# gcc training0.c -o outfile -lGL -lGLU -lglut && sleep 1 && ./outfile
	gcc $filename -o outfile -lm -Wformat=0 -m32  && sleep 1 && ./outfile
	sleep 3
	clear
done