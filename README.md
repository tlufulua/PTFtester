PTFtester it's a very simple test for 42 school's ft_printf proyect. It's created for the 2021 summer subject, where flags are considered bonus, not mandatory.

It compares the result of the original printf and the ft_printf. If the number of printf chars in printf are the same in ft_printf the test says OK!. Otherwise it's a KO. PTFtester also print the result of both functions, so you can check if ft_printf works like the original printf.
Mandatory part:
This instruction checks only the mandatory files.
- Compile the program with the rule make
- Execute with ./PTFtester
Bonus part: 
This instruction checks only the bonus files.
- Compile the program with the rule make bonus
- Execute with ./PTFtester. You can also use some flags like:
	- a or "all": make mandatory and bonus part (Ex: ./PTFtester a)
	- b or "bonus": make only bonus part
	- m or "mandatory": make only mandatory part.
The test checks leaks, so if you execute ./PTFtester a leaks, for example, the test executes system("PTFtester leaks").

Thanks for using this code! If you like it, give me a star :).
