#ifndef BACKTRACK_HPP
#define BACKTRACK_HPP

const int MAXCANDIDATES = 100;
const int MAXN = 100;

struct Data {

};

extern bool finished;

bool is_a_solution(int a[], int k, const Data& input);
void process_solution(int a[], int k, const Data& input);
void construct_candidates(int a[], int k, const Data& input,
                          int c[], int &nc);
void make_move(int a[], int k, const Data& input);
void unmake_move(int a[], int k, const Data& input);

void backtrack(int a[], int k, const Data& input);

#endif