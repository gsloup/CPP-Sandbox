const app = document.getElementById("app");

function Header({ title }) {
  return <h1>{title ? title : "Default Title"}</h1>;
}

function HomePage() {
  const names = ["Garrett", "Gabby", "Georgia", "Kyle"];
  const [likes, setLikes] = React.useState(0);

  function handleClick() {
    setLikes(likes + 1);
  }
  return (
    <div>
      <Header />
      <Header title="Reacting" />
      <ul>
        {names.map((name) => (
          <li key={name}>{name}</li>
        ))}
      </ul>

      <button onClick={handleClick}>Like({likes})</button>
    </div>
  );
}

ReactDOM.render(<HomePage />, app);
