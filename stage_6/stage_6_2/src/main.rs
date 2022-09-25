fn main() {
    let mut n = String::new();
    std::io::stdin().read_line(&mut n).unwrap();
    let n: u32 = n.trim().parse().expect("");

    let mut o = String::new();
    std::io::stdin().read_line(&mut o).unwrap();
    let o = o.trim().chars().map(|c| c as usize - '0' as usize).collect::<Vec<_>>();

    let mut sum = 0;
    
    for i in 0..n
    {
        sum += &o[i as usize];
    }
    println!("{}", sum);
}
