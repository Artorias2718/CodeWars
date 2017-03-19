using namespace std;
class Bouncingball
{
public:
    static int bouncingBall(double h, double bounce, double window);
};

int Bouncingball::bouncingBall(double h, double bounce, double window)
{
    // Child is on the nth floor of a building
    // Floor is "h" meters tall
    // The ball bounces back "bounce" meters high
    // Window is 1.5 meters from ground
    
    int bounceCount = 0;
    double bounceHeight = h;
    
    while(bounceHeight > window)
    {
				bounceHeight = bounceHeight * bounce;
        bounceCount += 2;
    }
    
    bounceCount -= 1;
    
    return bounceCount;
}