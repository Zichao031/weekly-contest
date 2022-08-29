//weekly contest 307

// 1.Minimum Hours of Training to Win a Competition
class solution {
    public:
    int minNumberOfHours (int initialEnergy, int initialExperience, vector<int> energy, vector<int> experience) {
        int n = energy.size();
        int en = initialEnergy, ex = initialExperience, ans = 0;
        for (int i = 0; i < n; i++) {
            if(en <= energy[i]) {
                ans += energy[i]-en+1;
                en = 1;
            }else{
                en -= energy[i];
            }
            if(ex <= experience[i]) {
                ans += experience[i]-ex+1;
                ex = 2*experience[i]+1;
            }
            return ans;
        }
    }
}