use std::env;
use std::io::ErrorKind;

/*use std::fs;
use std::os::windows; */


fn main() {
    let args: Vec<String> = env::args().collect();

    let param1_result: &String = &args[1];
    let file_path: &String = &args[2];
    let param2_result: &String = &args[3];
    let file_name: &String = &args[4];

    println!("{}", param1); 
}