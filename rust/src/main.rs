use std::env;

fn main() {
    let args: Vec<String> = env::args().collect();
    let argc = args.len();

    match argc {
        //as of right now, program will only search file name and not extension
        2 => {
            if args[1] == "-h" {
                println!(
                    "\nUsage: findex [-f or -d] <path-to-directory or file name> [-f] <filename>\n
            \n -d: Specify directory to search\n
            -f: Specify file name\n  
            -a: Search entire drive starting at root
            -h: help\n"
                );
            } else {
                println!("Could not execute. Use findex -h for usage directions")
            }
        }

        3 => {
            if args[1] == "-f" {

                // } else if args[1] == "-a" { // search whole drive
            } else {
                println!("Could not execute. Use findex -h for usage directions")
            }
        }

        4 => println!("Could not execute. Use findex -h for usage directions"), //three args entered: invalid

        5 => {
            if args[1] == "-d" { // move on to directory handling; can only accept -d as first param
            } else {
                println!("Could not execute. Use findex -h for usage directions")
            }
        }

        _ => println!("Could not execute. Use findex -h for usage directions\n"),
    }
    println!("{}", args[1]);
}
