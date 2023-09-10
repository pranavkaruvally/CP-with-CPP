// Beats 100%(0ms) in time and 100%(6.02 MB) in memory

class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int score = 0, underscores = 0;
        for (char move: moves) {
            if (move == 'L')
                score--;
            else if (move == 'R')
                score++;
            else
                underscores++;
        }
        
        return abs(score) + underscores;
    }
};
