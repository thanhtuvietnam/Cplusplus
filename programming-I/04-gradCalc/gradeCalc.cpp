#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  const int assign_percent = 15, test_percent = 50, exam_percent = 30,
            partic_percent = 5;
  float assignweight, testweight, examweight, particweight, percentoutof100,
      sum_of_all_weight, avg;

  cout << "grade calculator - computer programming i" << endl;

  cout << "\nthe weight of each deliverable on their final grade\n"
       << "\tprogrammig assignments: " << assign_percent << "%\n"
       << "\tchapter tests: " << test_percent << "%\n"
       << "\tfinal exam: " << exam_percent << "%\n"
       << "\tclass participation: " << partic_percent << "%" << endl;
  cout << "\nwhat is the graded percentage (out of 100%) for programming "
          "assignments? ";

  cin >> percentoutof100;

  assignweight = percentoutof100 * test_percent;

  cout << "what is the graded percentage (out of 100%) for chapter tests? ";

  cin >> percentoutof100;

  testweight = percentoutof100 * test_percent;

  cout << "what is the graded percentage (out of 100%) for final exam?";

  cin >> percentoutof100;

  examweight = percentoutof100 * exam_percent;

  cout << "what is the graded percentage (out of 100%) for class "
          "participation? ";

  cin >> percentoutof100;

  particweight = percentoutof100 * partic_percent;

  sum_of_all_weight =
      (assign_percent + test_percent + exam_percent + partic_percent);

  avg = (assignweight + testweight + examweight + particweight) /
        sum_of_all_weight;

  cout << fixed << setprecision(2);

  cout << "\n\n\t" << assignweight / sum_of_all_weight
       << "% in programming assignments\n"
       << "\t" << testweight / sum_of_all_weight << "% in chapter tests\n"
       << "\t" << examweight / sum_of_all_weight << "% in final tests\n"
       << "\t" << particweight / sum_of_all_weight
       << "% in class participation " << endl;
  cout << "\n\nfinal grade: " << avg << "%" << endl;

  if (avg >= 97 || avg == 100)
    cout << "\nyour grade is a+" << endl;
  else if (avg >= 94 && avg <= 96)
    cout << "\nyour grade is a" << endl;
  else if (avg >= 90 && avg <= 93)
    cout << "\nyour grade is a-" << endl;
  else if (avg >= 87 && avg <= 89)
    cout << "\nYour Grade is B+" << endl;
  else if (avg >= 84 && avg <= 86)
    cout << "\nyour grade is b" << endl;
  else if (avg >= 80 && avg <= 83)
    cout << "\nyour grade is b-" << endl;
  else if (avg >= 77 && avg <= 79)
    cout << "\nyour grade is c+" << endl;
  else if (avg >= 74 && avg <= 76)
    cout << "\nYour Grade is C" << endl;
  else if (avg >= 70 && avg <= 73)
    cout << "\nYour Grade is C-" << endl;
  else if (avg >= 60 && avg <= 69)
    cout << "\nYour Grade is D" << endl;
  else
    cout << "\nYour Grade is F" << endl;
  return 0;
}
