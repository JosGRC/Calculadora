[Editors]
Order=0
Focused=0
[Editor_0]
CursorCol=26
CursorRow=42
TopLine=29
LeftChar=1

[Project]
FileName=Calculadora.dev
Name=Calculadora
Type=1
Ver=2
ObjFiles=
Includes=
Libs=
PrivateResource=
ResourceIncludes=
MakeIncludes=
Compiler=
CppCompiler=
Linker=
IsCpp=1
Icon=
ExeOutput=
ObjectOutput=
LogOutput=
LogOutputEnabled=0
OverrideOutput=0
OverrideOutputName=
HostApplication=
UseCustomMakefile=0
CustomMakefile=
CommandLine=
Folders=
IncludeVersionInfo=0
SupportXPThemes=0
CompilerSet=0
CompilerSettings=0000000000000000000000000
UnitCount=1

[VersionInfo]
Major=1
Minor=0
Release=0
Build=0
LanguageID=1033
CharsetID=1252
CompanyName=
FileVersion=
FileDescription=Developed using the Dev-C++ IDE
InternalName=
LegalCopyright=
LegalTrademarks=
OriginalFilename=
ProductName=
ProductVersion=
AutoIncBuildNr=0
SyncProduct=1

[Unit1]
FileName=calc.cpp
CompileCpp=1
Folder=
Compile=1
Link=1
Priority=1000
OverrideBuildCmd=0
BuildCmd=


#include <stdio.h>
#include <conio.h>

main()
{
	int val1, val2, opc, resultado;
	
	while(opc!=5)
	{
		printf("********************CALCULADORA EN C++********************\n");
		printf("1.- Suma\n");
		printf("2.- Resta\n");
		printf("3.- Multiplicacion\n");
		printf("4.- Division\n");
		printf("5.- Salir\n");
		printf("Selecciona una opcion: ");
		scanf("%d",&opc);
		
		if(opc!=5){
			
			printf("Dame el primer valor: ");
			scanf("%d",&val1);
			printf("Dame el segundo valor: ");
			scanf("%d",&val2);
		}
		
		switch(opc){
			
			case 1:
				resultado= val1+val2;
				printf("El resultado de la suma es %d \n",resultado);
				break;
			case 2:
				resultado= val1-val2;
				printf("El resultado de la resta es %d \n",resultado);
				break;
			case 3:
				resultado= val1*val2;
				printf("El resultado de la multiplicacion es %d \n",resultado);
				break;
			case 4:
				resultado= val1/val2;
				printf("El resultado de la division es %d \n",resultado);
				break;
			case 5:
				break;
				
		}
	}
}

# Project: Calculadora
# Makefile created by Dev-C++ 5.11

CPP      = g++.exe
CC       = gcc.exe
WINDRES  = windres.exe
OBJ      = calc.o
LINKOBJ  = calc.o
LIBS     = -L"C:/Program Files (x86)/Dev-Cpp/MinGW64/lib" -L"C:/Program Files (x86)/Dev-Cpp/MinGW64/x86_64-w64-mingw32/lib" -static-libgcc
INCS     = -I"C:/Program Files (x86)/Dev-Cpp/MinGW64/include" -I"C:/Program Files (x86)/Dev-Cpp/MinGW64/x86_64-w64-mingw32/include" -I"C:/Program Files (x86)/Dev-Cpp/MinGW64/lib/gcc/x86_64-w64-mingw32/4.9.2/include"
CXXINCS  = -I"C:/Program Files (x86)/Dev-Cpp/MinGW64/include" -I"C:/Program Files (x86)/Dev-Cpp/MinGW64/x86_64-w64-mingw32/include" -I"C:/Program Files (x86)/Dev-Cpp/MinGW64/lib/gcc/x86_64-w64-mingw32/4.9.2/include" -I"C:/Program Files (x86)/Dev-Cpp/MinGW64/lib/gcc/x86_64-w64-mingw32/4.9.2/include/c++"
BIN      = Calculadora.exe
CXXFLAGS = $(CXXINCS) 
CFLAGS   = $(INCS) 
RM       = rm.exe -f

.PHONY: all all-before all-after clean clean-custom

all: all-before $(BIN) all-after

clean: clean-custom
	${RM} $(OBJ) $(BIN)

$(BIN): $(OBJ)
	$(CPP) $(LINKOBJ) -o $(BIN) $(LIBS)

calc.o: calc.cpp
	$(CPP) -c calc.cpp -o calc.o $(CXXFLAGS)
