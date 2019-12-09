This will be a simple  exercise, where you will take a given example C++  program, document it and use the doxygen tools (that are already installed in the VM, else you will need to install Doxygen (Links to an external site.)) to generate html documentation. It is similar to Javadoc that is used to document Java programs.

Since the documentation will have a lot of files (it also generates class diagrams), you will turn in a zip file of the documentation.

Why is this important?

Useful to learn tools that produce professional looking documentation 
Doxygen also generates class diagrams that can be directly clicked to go to any class documentation.
Example Exercise:

Download the  three following C++ files into a new folder.

Employee.cppPreview the document

Person.cppPreview the document

Student.cppPreview the document

You will document the above 3 files as per the instructions below and generate html documentation.

Doxygen for Documenting C++

Doxygen is the de facto standard tool for generating documentation from annotated C++ sources, but it also supports other popular programming languages such as C, Objective-C, C#, PHP, Java, Python, IDL (Corba, Microsoft, and UNO/OpenOffice flavors), Fortran, VHDL, Tcl, and to some extent D.

 

This document discusses the basics for getting started with Doxygen

 

Step 1: Generate the configuration file from Doxygen by running the command

doxygen -g temp.cfg


where temp.cfg is the name of the configuration file used by doxygen.




 

Step 2:

Update the configuration file for Input folder [folder containing c++ source files] and Output folder [folder where HTML and latex document should be generated].

Look in temp.cfg for  the lines

INPUT =

OUTPUT_DIRECTORY =

These lines take a folder name containing the sources (for INPUT) and a folder to generate and store the documentation (for OUTPUT_DIRECTORY). Provide the full path to the folder

 

Step 3:

Add the comment for documenting in C++ class file in the following fashion for every method in class.

 

/**

* set the name of the Person

*

* @param name

* @return none

*/

(param is for any parameters to the function, return for return variables, etc.)

 

void setName(const string& name) {

this->name = name;

}

 

Step 4:

Run doxygen on updated configuration file using the command

doxygen temp.cfg .

 

This will generate the required HTML and latex documents in the folder specified by OUTPUT_DIRECTORY. You will see an  html folder and open the index.html in that folder using your browser

Step 5.

Make a zip file of your documentation folder and submit that to Canvas.