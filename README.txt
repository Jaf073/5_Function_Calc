VSMerlot 5-Function Calculator
By John Feet

-------------------------------------------------------------------------------------------------------
Description:
This program is a calculator which was made with Visual Studio 2022, in standard C++, with a target for Windows 10 or newer, and with MSVC windows graphic library.

This calculator has numbers: 0-9, operators: (+,-, *, /, %), and buttons: Clear, Clear Entry, and Toggle Trace Logic.

The ( +, -, *, /) operators are used as standard calculations.

The ( % ) operator is used as an "operator" tax calculation. For example, adding a five percent tax to one hundred dollars (100 + 5%) equals 105 and subtracting (100 - 5%) equals 95.

C button: Clears calculator's entire state and display.

CE button: Clears calculator's currenty entry

Toggle Trace Logic: Toggles the trace logic feature of the program

Display Panel: shows the most recently selected number and the result after ( = ) or ( % ) is selected.

Trace Logic Tab: Shows every relevant decision point including If statements, Functions, and Calculations along with a count of how many decisions were made between each ( = ), ( % ), or ( C ).

-------------------------------------------------------------------------------------------------------
Known Errors:
- The display does not show the whole equation, it shows the current number value
	-This is just a visual feature I do not like, everything else works as expected and the output is shown
-the display does not show negative numbers properly
	-It still calculates them correctly

-------------------------------------------------------------------------------------------------------
Possible Variations:
This section shows points which I am aware that I did not exactly follow the instructions
(I can fix these if requested)

Intro Trace On and Intro Trace Off:
	-I used a toggle button rather than two seperate buttons
	-I did this because I felt that it would be easier for the user to know if the toggle trace is 	on/off if there was a single button + text that displayed the state

Aditive Tax
	-I made it so the % sign would work with any operator rather than just +
	-I did this because I felt that it would make the % sign more useful

Logic Trace Tab
	-The logic trace count resets after ( = ), ( % ), or ( C ).
	-I figured that the count is used to count the steps for each operation, not the total amount of 	teps made over the whole program

Continuous Operators
	-The calculator works with more than one operator and more than two variables.
	For Example: (5 + 5 + 5 = 15) instead of (5 + 5 = 10, + 5 = 15)
	-I did this because I thought it would make the calculator more practical rather than having to 	press the ( = ) sign between each calculation
