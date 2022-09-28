fn main() {
    let mut st = String::new();
    std::io::stdin().read_line(&mut st).unwrap();
    let st: Vec<&str> = st.trim().split(" ").collect();

    let temp1 : i32 = reverse(st[0].parse().unwrap());
    let temp2 : i32 = reverse(st[1].parse().unwrap());

    if temp1 > temp2
    {
        print!("{}", temp1);
    }
    else
    {
        print!("{}", temp2);
    }
}

fn reverse(mut n: i32) -> i32{
    let mut temp : i32 = 0;

    n *= 10;
    for i in 0..3
    {
        temp = (temp * 10) + (n / 10) % 10;
        n /= 10;
    }

    return temp;
}
