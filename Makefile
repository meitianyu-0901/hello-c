d34.exe: main.c util.c util.h
	gcc main.c util.c -o d34.exe -Wall

clean:
	powershell -NoProfile -Command "Remove-Item d34.exe -ErrorAction SilentlyContinue"