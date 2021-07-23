//
// Created by Akshat Bajpai on 7/16/21.
//

#include<iostream>
#include "NFIQ_2/NFIQ2/NFIQ2Algorithm/include/nfiq2.hpp"

using namespace std;
int main(){
    cout<<"NFIQ 2 Features:\n";
    for(const auto &features:NFIQ2::QualityFeatures::getQualityFeatureIDs()){
        cout<<" * "<<features<<"\n";
    }
    return 0;
}
