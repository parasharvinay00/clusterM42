
# This file is saved here for usage for any third person who does not have cppmon already in .bashrc file.
cppmon (){
	nodemon -q -e cpp -x "g++ $* -o binary && ./binary || exit 0" # We exit with zero coz we don't want nodemon to stop even when the program throws a non zero return code(i.e., compiler throws exception).
}
