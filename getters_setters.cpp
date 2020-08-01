#include<iostream>

using namespace std;

//Getters and Setters restrict the user manipulation data in a class
//They control access to individual attributes of a specific object

class Movie {
    private:
        string rating;
    public:
        string title;
        string director;
        Movie(string aTitle, string aDirector, string aRating){
            title = aTitle;
            director = aDirector;
            setRating(aRating);
        };
        void setRating(string aRating){
            if(aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR"){
                rating = aRating;
            } else {
                rating = "NR";
            }
        }

        string getRating(){
            return rating;
        }
};


int main(){

    Movie avengers("The Avengers", "Joss Whedon", "PG-13");
    cout << avengers.getRating() << endl;
    avengers.setRating("Blah");
    cout << avengers.getRating() << endl;

    return 0;
}