## Description
A very generic template to create XLL files that execute code from within Excel. This XLL will only open a MessageBox but the code can easily be adapted if you need it to do something else like spawning a child process if you want to improve your detection rules.

## Usage
Compile the code in main.c (e.g. in Visual Studio) as DLL. Rename the resulting DLL into filename.xll and it should automatically open in Excel when doubleclicked. 
