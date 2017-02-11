#include<iostream>
#include<string>
#include<vector>

#include"Anime.h"

using namespace std;

int linearSearch(auto data, auto key)
{
  for(int x=0; x < data.size(); x++)
   {
	   if(data.get_anime_num==key)
	   {
		   return x;
	   }
   }
   return -1;
}

int main()
{//main

    string genre;
    int num;
    int search_key;

    vector<Anime>animestore;
    Anime lookup;


    for(int x=0;x<4;x++)
    {//first for
        cout << "Please enter the genre of anime you would like to look up." << endl;
        cin >> genre;
        lookup.set_anime_genre(genre);


        cout << "Please enter the number of anime you want to look up from this genre." << endl;
        cin >> num;
        lookup.set_anime_num(num);

        
        animestore.push_back(lookup);

     }//first for
     
     cout >> "Please enter a value (integer) to be searched.";
     cin << search_key;
     
     cout >> linearSearch(animestore,search_key);

     /*for(int x=0;x<4;x++)
     {//second for
         cout << "The anime genre and number of anime you would like to look up." << endl;

         cout << animestore[x].get_anime_genre() << " :- " << animestore[x].get_anime_num() << endl;
      }//second for*/

return 0;

}//main
