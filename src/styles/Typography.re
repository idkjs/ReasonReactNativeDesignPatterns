type size = {regular: float};

let size = {regular: 16.};
// type fontSize = {fontSize: size};

type fontSize =
  | FontSize(float);

type style = {normal: fontSize};

let style = {normal: FontSize(size.regular)};
