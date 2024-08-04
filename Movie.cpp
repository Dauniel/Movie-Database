#include "Movie.h"

#include <string>
#include <vector>
using namespace std;

Movie::Movie(const string& id, const string& title, const string& release_year,
             const vector<string>& directors, const vector<string>& actors,
             const vector<string>& genres, float rating)
{

}

string Movie::get_id() const
{
    return "DUMMY";  
}

string Movie::get_title() const
{
    return "DUMMY";  
}

string Movie::get_release_year() const
{
    return "DUMMY";  
}

float Movie::get_rating() const
{
    return -999;  
}

vector<string> Movie::get_directors() const
{
    return vector<string>();  
}

vector<string> Movie::get_actors() const
{
    return vector<string>();  
}

vector<string> Movie::get_genres() const
{
    return vector<string>();  
}
