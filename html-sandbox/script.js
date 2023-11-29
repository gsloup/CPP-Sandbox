const app = document.getElementById("app");

function Header({ title }) {
  return <h1>{title ? title : "Default Title"}</h1>;
}

function HomePage() {
  const names = ["Garrett", "Gabby", "Georgia", "Kyle"];
  return (
    <div>
      <Header />
      <Header title="Reacting" />
      <ul>
        {names.map((name) => (
          <li key={name}>{name}</li>
        ))}
      </ul>
    </div>
  );
}

ReactDOM.render(<HomePage />, app);
