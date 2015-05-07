#include<iostream>

#include "process.h"

using namespace std;

int main(int argc, char* argv[]){
	Process* process = new Process();
	process->setAttributes(1,20,3);

	cout << "Waiting Time: " << process->getPID() << endl;
	cout << "Waiting Time: " << process->getRemainingBurstTime() << endl;
	cout << "Waiting Time: " << process->getPWaitingTime() << endl;

	return 0;
}