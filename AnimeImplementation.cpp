#include<iostream>
#include<string>

#include"Anime.h"

using namespace std;

Anime::Anime(string genre, int num)
{
    std::string animegenre;
    int numofanime;
}

void Anime::set_anime_genre(std::string genre)
{
   animegenre=genre;
}

void Anime::set_anime_num(int num)
{
   numofanime=num;
}

std::string Anime::get_anime_genre()
{
   return animegenre;
}

int Anime::get_anime_num()
{
   return numofanime;
}


