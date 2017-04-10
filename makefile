test.exe:main.cpp SingleMoney.cpp
	g++ main.cpp SingleMoney.cpp -o test.exe -std=c++11
clear:
	del *.exe