#ifndef ANIME_H
#define ANIME_H

#include<iostream>
#include<string>

using namespace std;


class Anime
{//class
  private:
      std::string animegenre;
      int numofanime;

  public:
      Anime(string="", int=0);

      void set_anime_genre(string genre);

      void set_anime_num(int num);

      
      std::string get_anime_genre();

      int get_anime_num();

};//class

#endif
      
