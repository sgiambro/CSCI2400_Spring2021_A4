//race.cpp

#include <iostream>
#include <cstdlib>
#include <sstream>
#include <string>


class Horse {
        private:
                int position;
        public:
                Horse(){
                        Horse::position = 0;
                }//end null Horse

                void advance(){
                        int ran = 0;
                        ran = rand();
                        if (ran%2 == 1){
                                Horse::position += 1;
                        }//end if
                }//end advance

                int getPosition(){
                        return Horse::position;
                }//end getPosition
};  //end Horse


class Race {
	private:
		Horse h[5];
		int length = 15;
	public:
		Race(){
			Race::length = 15;
		}//end null Race

		Race(int length){
			Race::length = length;
		}//end int Race

		void printLane(int horseNum){
			for (int i=0; i< Race::length; i++){
				if (h[horseNum].getPosition() == i){
					std::cout << horseNum;
				} else {
					std::cout << ".";
				}//end of if chain
			
			}//end for

			std::cout << "\n";			
	
		}//end printLane

		void start(){
			int winner = 999;
			
			while(winner == 999){
				for(int i=0; i<5; i++){
					printLane(i);
					h[i].advance();
				}//end for
				
				std::cout << "\n";

				for(int i=0; i<5; i++){
                                       if(h[i].getPosition() == 15){
                                               winner = i;
                                       }//end if
				}//end for

			}//end while
			
			for(int i=0; i<5; i++){
                                        printLane(i);
			}//end for
			std::cout << "\nThe winner of the race is " << winner << "\n";

		}//end start

};  //end Race


int main(){
	
	int seed = 0;
	std::string stringSeed = "0";
		
	//gets seed for random
	std::cout<<"Enter the seed: ";
	getline(std::cin,stringSeed);
	
	//convert seed to int
	std::stringstream ss;
	ss << stringSeed;
	ss >> seed;

	//seed set
	srand(seed);
	
	//runs race
	Race r;
	r.start();

}//end main
