// Compare this file to index.html to look into how NextJS compares to React
// Can make this a .js file or .jsx since there isn't any html on it
import { useState } from "react";

function Header({ title }) {
  return <h1>{title ? title : "Default Title"}</h1>;
}

export default function HomePage() {
  const names = ["Garrett", "Gabby", "Georgia"];

  const [likes, setLikes] = useState(0);

  function handleClick() {
    setLikes(likes + 1);
  }

  return (
    <div>
      <Header />
      <Header title="This is a Title!" />
      <ul>
        {names.map((name) => (
          <li key={name}>{name}</li>
        ))}
      </ul>

      <button onClick={handleClick}>Like ({likes})</button>
    </div>
  );
}
