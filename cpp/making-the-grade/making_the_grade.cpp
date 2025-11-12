#include <array>
#include <string>
#include <vector>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
  std::vector<int> rounded_scores;
  for (double score : student_scores) {
    rounded_scores.push_back(static_cast<int>(score));
  }
  return rounded_scores;
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
  int failed_count = 0;
  for (int score : student_scores) {
    if (score <= 40) {
      ++failed_count;
    }
  }
  return failed_count;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
  const int interval = (highest_score - 40) / 4;

  std::array<int, 4> thresholds = {0};
  for (int i = 0; i < 4; ++i) {
    thresholds[i] = 41 + i * interval;
  }
  return thresholds;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string>
student_ranking(std::vector<int> student_scores,
                std::vector<std::string> student_names) {
  std::vector<std::string> rankings;
  for (size_t i = 0; i < student_scores.size(); ++i) {
    const std::string ranking = std::to_string(i + 1) + ". " +
                                student_names[i] + ": " +
                                std::to_string(student_scores[i]);
    rankings.push_back(ranking);
  }
  return rankings;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) {
  std::string perfect_student = "";
  for (size_t i = 0; i < student_scores.size(); ++i) {
    if (student_scores[i] == 100) {
      perfect_student = student_names[i];
      break;
    }
  }
  return perfect_student;
}
