fn main() {
    let mut n = String::new();
    std::io::stdin().read_line(&mut n).unwrap();
    let n: u32 = n.trim().parse().expect("");
    
    let mut o = String::new();
    std::io::stdin().read_line(&mut o).unwrap();
    for i in 0..n
    {
        println!("{}", o[i as i32]);
    }

} 
