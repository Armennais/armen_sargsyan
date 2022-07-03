import React, { useEffect, useState } from 'react';
import ReactDOM from 'react-dom/client';
import Film,{list} from './Components/Film';
import './styles/App.css';
import Button from './Components/Buttonn';
import Modal from './Components/Modal';


export const AppFC = () =>{
  const[searchText,setSearchText] = useState('')
  const[newElement,setNewElement] = useState(list)
  const [elem,setElem] = useState(list);
  // const[a,setA] = useState(elem);
  const searchFilm = (e) => {
    setSearchText(e.target.value)
  }

  useEffect(() =>{
    let filtered = !searchText ? newElement : newElement.filter((e) => e.title.toLowerCase().includes(searchText.toLowerCase()));
    setElem(filtered);
  },[searchText])

  const AddElem = (newPost) =>{
    setElem([...elem,newPost])
  }
  console.log(elem)
  const[show,setShow] = useState(false);
  

  return(

    <div className="AppFC">
      <p id="count">Count: {elem.length}</p>
      <input type="text" className="input" placeholder="Search" onChange={searchFilm}/>
      <button onClick={() => setShow(true)}>Show Modal</button>
      <Modal onClose={()=> setShow(false)}  show={show} addElem ={AddElem} />
      <Film setElem={setElem} elem = {elem} /> 
     </div>
  )
}
export default AppFC;

{/* <Button value= "Add" onClick = {AddElem}/> */}