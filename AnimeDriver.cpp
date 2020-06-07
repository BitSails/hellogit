#include<iostream>
#include<string>
#include<vector>

#include"Anime.h"

using namespace std;

int linearSearch(auto data, auto key)
{
  for(int x=0; x < data.size(); x++)
   {
	   if(data[x].get_anime_genre()==key)
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
    string search_key;
    int result;

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
     
     //search
     cout << "Please enter a value (genre) to be searched.";
     cin >> search_key;
     
     while(search_key != "#")
    {
      result = linearSearch (animestore,search_key); 
      
      
      cout << " " << search_key << " was";
      
       if (result == -1)
         cout<<" not found.";
       
       else
        cout<<" found at index "<<result << ".";


        cout<<endl<<endl<<"Enter another value to be searched for, please: ";
        cin>>search_key; 
    }//search
    
    /*for(int x=0;x<4;x++)
     {//second for
         cout << "The anime genre and number of anime you would like to look up." << endl;

         cout << animestore[x].get_anime_genre() << " :- " << animestore[x].get_anime_num() << endl;
      }//second for*/

return 0;

}//main
