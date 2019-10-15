cmake_minimum_required (VERSION 3.8)

file(GLOB BasicMathsSource
	"*.cpp"
	"*.h"
)

add_executable (BasicMathsSource ${BasicMathsSource})
