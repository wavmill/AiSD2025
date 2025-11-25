#include "backtrack.hpp"

bool finished = false;

void backtrack(int a[], int k, const Data& input) {
    if (is_a_solution(a, k, input)) {
        process_solution(a, k, input);
    } else {
        k = k + 1;
        int c[MAXCANDIDATES];
        int nc = 0;

        construct_candidates(a, k, input, c, nc);

        for (int i = 0; i < nc; i++) {
            a[k] = c[i];
            make_move(a, k, input);

            backtrack(a, k, input);

            unmake_move(a, k, input);

            if (finished) return;   // досрочное завершение
        }
    }
}