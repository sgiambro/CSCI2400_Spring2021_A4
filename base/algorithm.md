Goal:   
	-Create a horse race using object oriented programming

Input:  
	-recive the seed for the random number genorater
	-horse array use horse objects for the horse class
	-Race() gets the length of the race if one is specified		
	-printLane() gets the horse id and uses that to get its position
	
Output: 
	-getPosition() gives the position of the selected horse
	-printLane() will print a visual representation of the race so the user can see wht is happening
	-once a winner is found their horse number will be printed
Steps:

	Race()
		Race()
			-sets length of race if none is specified
		
		Race(int length) 
			-sets length of race to the entered value
		
		printLane()
			-make a for loop the length of the race
			-in the for loop print the horse number at its position and a "." everywhere else

		start()
			-make while loop with two for loops in it
			-one loop for the positions to be printed with printLane() and then advance()
			-the other one for checking if there is a winner
			-once a winner is found the while loop will brake and for loop with printLane() will run
			-print the winner of the race
		
	Horse()
		Horse()
			-set a value for the horses position
		
		advance()
			-get a random number
			-do a 50-50 to see if the horse moves 
		
		getPosition()
			-returns the int of where the horse is

	main()
		-get the seed from the user
		-convert the seed and use it
		-make a Race() object then run start()
