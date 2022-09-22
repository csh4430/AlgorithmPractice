fn main() {
    let mut n = String::new();
    std::io::stdin().read_line(&mut n).unwrap();
    let mut n: u32 = n.trim().parse().expect("Please type a number!");
    n += 1;
    let mut cnt = 0;    
    for i in 1..n {
        if d(i as i32)
        {
            cnt += 1;
        }
    }
    println!("{cnt}"); 
 }

fn d(num:i32) -> bool{
    if num < 100 {  
        return true;
    }
    else if num < 1000{
        let a = ((num / 100) % 10) - ((num / 10) % 10) ;
        let b = ((num / 10) % 10) - (num % 10) ;
        a == b
    }
    else{
        let a = ((num / 1000) % 10) - ((num / 100) % 10) ;
        let b = ((num / 100) % 10) - ((num / 10) % 10) ;
        let c = ((num / 10) % 10) - (num % 10) ;
        let r = a == b;
        let r2 = b == c;
        r && r2
    }
}
