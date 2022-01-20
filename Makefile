all: Task1.exe Task2.exe Task3.exe Task4.exe Task5.exe Task6.exe Task7.exe Task8.exe Task9.exe Task10.exe
Task1.exe: Task1.cpp
	cl /FeTask1.exe Task1.cpp
Task2.exe: Task2.cpp
	cl /FeTask2.exe Task2.cpp
Task3.exe: Task3.cpp
	cl /FeTask3.exe Task3.cpp
Task4.exe: Task4.cpp
	cl /FeTask4.exe Task4.cpp
Task5.exe: Task5.cpp
	cl /FeTask5.exe Task5.cpp
Task6.exe: Task6_main.cpp Task6_func.cpp
	cl /FeTask6.exe Task6_main.cpp Task6_func.cpp
Task7.exe: Task7_main.cpp Task7_func.cpp
	cl /FeTask7.exe Task7_main.cpp Task7_func.cpp
Task8.exe: Task8.hpp Task8_func.cpp Task8_main.cpp
	cl /FeTask8.exe Task8_func.cpp Task8_main.cpp
Task9.exe: Task9.hpp Task9_func.cpp Task9_main.cpp
	cl /FeTask9.exe Task9_func.cpp Task9_main.cpp
Task10.exe: Task9.exe
	lib  /out:Task10.lib Task9_func.obj
	link /out:Task10.exe Task9_main.obj Task10.lib