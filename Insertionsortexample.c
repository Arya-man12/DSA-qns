#include <iostream> 
#include <string> 
using namespace std; 
struct Song { 
string title; 
string artist; 
string album; 
}; 
Song songs[] = { 
{"Bohemian Rhapsody", "Queen", "A Night at the Opera"}, 
{"Hotel California", "Eagles", "Hotel California"}, 
{"Imagine", "John Lennon", "Imagine"}, 
{"Stairway to Heaven", "Led Zeppelin", "Led Zeppelin IV"}, 
{"Thriller", "Michael Jackson", "Thriller"} 
}; 
void songsort(Song songs[], int length, const std::string &criteria); 
int compare(const Song &song1, const Song &song2, const std::string &criteria); 
int main() { 
string play[2]={"My favorite songs","Road trip mix"}; 
int num = sizeof(songs) / sizeof(songs[0]); 
int playchoice; 
string selcri; 
for(int x=0;x<2;x++){ 
cout<<play[x]<<"\n"; 
} 
cout << "Please select a playlist to sort:" << endl; 
cin >> playchoice;; 
if(playchoice<=2){ 
cout << "Please select a sorting criteria:" << endl; 
cin >> selcri; 
if (selcri == "Title" || selcri == "Artist" || selcri== "Album") { 
songsort(songs, num, selcri); 
cout << "Playlist: " << playchoice << " sorted by " << selcri  << endl; 
cout << "Songs:" << endl; 
for (int i = 0; i < num; i++) { 
         cout<< songs[i].title << " by " << songs[i].artist << endl; 
        } 
    } else { 
        cout << "Error." << endl; 
    } 
} 
else{ 
 cout<<"Invalid playlist choice"; 
} 
    return 0; 
} 
void songsort(Song songs[], int length, const std::string &criteria) { 
    for (int i = 1; i < length; i++) { 
        Song cursong = songs[i]; 
        int j = i - 1; 
 
        while (j >= 0 && compare(cursong, songs[j], criteria) > 0) { 
            songs[j + 1] = songs[j]; 
            j--; 
        } 
 
        songs[j + 1] = cursong; 
    } 
} 
 
int compare(const Song &song1, const Song &song2, string &criteria) { 
    if (criteria == "Title") { 
return song1.title.compare(song2.title); 
} else if (criteria == "Artist") { 
return song1.artist.compare(song2.artist); 
} else if (criteria == "Album") { 
return song1.album.compare(song2.album); 
} else { 
return 0;  
} 
}