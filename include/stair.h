#ifndef STAIR_H
#define STAIR_H

#include <vector>
#include <allegro.h>

using namespace std;

class stair
{
  public:
    stair(float newX, float newY);
    virtual ~stair();

    // FUNctions
    void update( vector<stair>* allStairsCopy);
    void draw( BITMAP *tempImage);

    static float location_y( float oldX);
    int find_bottom_stair( int stairIndex);

    // Static members
    static int numberStairs;
    static float scrollSpeed;
    static BITMAP* image;
  protected:
  private:
    float x;
    float y;

    int stairID;
};

#endif // STAIR_H
