fn main() {
    let mut n = String::new();
    std::io::stdin().read_line(&mut n).unwrap();
    let n: char = n.trim().parse().expect("");

    println!("{}", n as i32);
}
