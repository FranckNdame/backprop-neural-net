//
//  main.cpp
//  backprop-neural-net
//
//  Created by Franck-Stephane Ndame Mpouli on 06/12/2019.
//  Copyright © 2019 Franck-Stephane Ndame Mpouli. All rights reserved.
//

#include <iostream>
#include <vector>

class Network
{
public:
    // Constructor
    Network(const std::vector<unsigned> &architecture);
    
    //
    void feedFoward(const std::vector<double> &inputs);
    void backPropagate(const std::vector<double> &targets);
    // const qualifiers
    void getResults(std::vector<double> &results) const;
private:
    
};

int main(int argc, const char * argv[]) {
    
    std::vector<unsigned> architecture;
    
    Network network(architecture);
    std::vector<double> inputs;
    network.feedFoward(inputs);
    
    std::vector<double> targets;
    network.backPropagate(targets);
    
    std::vector<double> results;
    network.getResults(results);
    
    
    return 0;
}
